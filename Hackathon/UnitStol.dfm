object FormStol: TFormStol
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormStol'
  ClientHeight = 482
  ClientWidth = 630
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 25
  object DBGrid1: TDBGrid
    Left = 310
    Top = 0
    Width = 320
    Height = 482
    Align = alRight
    DataSource = DataModule2.DataSourceStollar
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -21
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    Columns = <
      item
        Expanded = False
        FieldName = 'id'
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Nomi'
        Title.Alignment = taCenter
        Width = 298
        Visible = True
      end>
  end
  object LabeledEdit1: TLabeledEdit
    Left = 61
    Top = 72
    Width = 200
    Height = 37
    Alignment = taCenter
    EditLabel.Width = 64
    EditLabel.Height = 29
    EditLabel.Caption = 'Nomi'
    EditLabel.Font.Charset = DEFAULT_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -24
    EditLabel.Font.Name = 'Tahoma'
    EditLabel.Font.Style = [fsBold]
    EditLabel.ParentFont = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 24
    Top = 147
    Width = 129
    Height = 57
    Caption = 'Saqlash'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 166
    Top = 147
    Width = 138
    Height = 57
    Caption = 'O'#39'zgartirish'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 82
    Top = 227
    Width = 156
    Height = 57
    Caption = 'O'#39'chirish'
    TabOrder = 4
    OnClick = Button3Click
  end
end
