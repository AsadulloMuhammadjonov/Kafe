object FormTolovv: TFormTolovv
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormTolovv'
  ClientHeight = 448
  ClientWidth = 522
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
  object Label1: TLabel
    Left = 222
    Top = 8
    Width = 13
    Height = 25
    Caption = '0'
  end
  object Label2: TLabel
    Left = 47
    Top = 64
    Width = 172
    Height = 25
    Caption = 'Umumiy Summa'
  end
  object Label3: TLabel
    Left = 47
    Top = 112
    Width = 138
    Height = 25
    Caption = 'Xizmat Xaqqi'
  end
  object Label4: TLabel
    Left = 47
    Top = 160
    Width = 135
    Height = 25
    Caption = 'Jami Summa'
  end
  object Label5: TLabel
    Left = 255
    Top = 64
    Width = 13
    Height = 25
    Caption = '0'
  end
  object Label6: TLabel
    Left = 255
    Top = 112
    Width = 13
    Height = 25
    Caption = '0'
  end
  object Label7: TLabel
    Left = 255
    Top = 160
    Width = 13
    Height = 25
    Caption = '0'
  end
  object Label8: TLabel
    Left = 392
    Top = 112
    Width = 13
    Height = 25
    Caption = '0'
    Visible = False
  end
  object Label9: TLabel
    Left = 392
    Top = 64
    Width = 13
    Height = 25
    Caption = '0'
    Visible = False
  end
  object Label10: TLabel
    Left = 392
    Top = 160
    Width = 13
    Height = 25
    Caption = '0'
    Visible = False
  end
  object DateTimePicker1: TDateTimePicker
    Left = 456
    Top = 48
    Width = 186
    Height = 33
    Date = 44550.000011574080000000
    Time = 44550.000011574080000000
    TabOrder = 0
    Visible = False
  end
  object DateTimePicker2: TDateTimePicker
    Left = 456
    Top = 104
    Width = 186
    Height = 33
    Date = 44550.999988425920000000
    Time = 44550.999988425920000000
    TabOrder = 1
    Visible = False
  end
  object Edit1: TEdit
    Left = 48
    Top = 232
    Width = 250
    Height = 33
    Alignment = taCenter
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 48
    Top = 296
    Width = 250
    Height = 33
    Alignment = taCenter
    TabOrder = 3
  end
  object Button1: TButton
    Left = 344
    Top = 216
    Width = 137
    Height = 49
    Caption = 'Naqt'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 344
    Top = 280
    Width = 137
    Height = 49
    Caption = 'Plastik'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 0
    Top = 384
    Width = 522
    Height = 64
    Align = alBottom
    Caption = 'Sotish'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 411
    Top = -1
    Width = 113
    Height = 54
    Caption = 'Chiqish'
    TabOrder = 7
    OnClick = Button4Click
  end
  object frxReport1: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44525.435622419000000000
    ReportOptions.LastChange = 44525.435622419000000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 312
    Top = 112
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 83.000000000000000000
      PaperHeight = 600.000000000000000000
      PaperSize = 256
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 107.504020000000000000
        Top = 18.897650000000000000
        Width = 238.110390000000000000
        object Date: TfrxMemoView
          Left = 80.842610000000000000
          Top = 16.795300000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '[Date]')
          ParentFont = False
        end
        object Memo3: TfrxMemoView
          Left = 4.559060000000000000
          Top = 16.795300000000000000
          Width = 64.252010000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Sana')
          ParentFont = False
        end
        object Time: TfrxMemoView
          Left = 77.063080000000000000
          Top = 47.031540000000000000
          Width = 98.267780000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            '[Time]')
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = 4.559060000000000000
          Top = 47.031540000000000000
          Width = 64.252010000000000000
          Height = 18.897650000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Vaqt')
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = -21.000000000000000000
          Top = 84.826840000000000000
          Width = 75.590551180000000000
          Height = 22.677180000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1086#1084#1080)
          ParentFont = False
        end
        object Memo6: TfrxMemoView
          Left = 54.133890000000000000
          Top = 84.826840000000000000
          Width = 49.133890000000000000
          Height = 22.677180000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1086#1085#1080)
          ParentFont = False
        end
        object Memo7: TfrxMemoView
          Left = 104.488250000000000000
          Top = 84.826840000000000000
          Width = 71.811070000000000000
          Height = 22.677180000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1072#1088#1093#1080)
          ParentFont = False
        end
        object Memo2: TfrxMemoView
          Left = 175.063080000000000000
          Top = 84.826840000000000000
          Width = 56.692950000000000000
          Height = 22.677180000000000000
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1091#1084#1084#1072)
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clBlack
        Font.Height = -16
        Font.Name = 'Arial Narrow'
        Font.Style = [fsBold]
        Height = 34.015770000000000000
        ParentFont = False
        Top = 188.976500000000000000
        Width = 238.110390000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object frxDBDataset1Tov_nomi: TfrxMemoView
          Left = -21.897650000000000000
          Top = 7.559060000000000000
          Width = 75.590560940000000000
          Height = 26.456710000000000000
          DataField = 'Tov_nomi'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Tov_nomi"]')
          ParentFont = False
        end
        object frxDBDataset1Miqdor: TfrxMemoView
          Left = 54.692950000000000000
          Top = 7.559060000000000000
          Width = 49.133890000000000000
          Height = 26.456710000000000000
          DataField = 'Miqdor'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Miqdor"]')
          ParentFont = False
        end
        object frxDBDataset1Summa: TfrxMemoView
          Left = 104.622140000000000000
          Top = 7.559060000000000000
          Width = 71.811070000000000000
          Height = 26.456710000000000000
          DataField = 'Narxi'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Narxi"]')
          ParentFont = False
        end
        object frxDBDataset1JamiSumma: TfrxMemoView
          Left = 176.551330000000000000
          Top = 7.559060000000000000
          Width = 56.692950000000000000
          Height = 26.456710000000000000
          DataField = 'Summa'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial Narrow'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Summa"]')
          ParentFont = False
        end
      end
      object Footer1: TfrxFooter
        FillType = ftBrush
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        Height = 146.252010000000000000
        ParentFont = False
        Top = 245.669450000000000000
        Width = 238.110390000000000000
        object Memo1: TfrxMemoView
          Top = 84.338590000000000000
          Width = 128.504020000000000000
          Height = 26.456710000000000000
          Memo.UTF8W = (
            #1046#1072#1084#1080' '#1057#1091#1084#1084#1072)
        end
        object Memo10: TfrxMemoView
          Top = 118.354360000000000000
          Width = 102.047310000000000000
          Height = 22.677180000000000000
          Memo.UTF8W = (
            #1058#1086#1083#1072#1085#1076#1080)
        end
        object frxDBDataset1JamiSumma1: TfrxMemoView
          Left = 152.622140000000000000
          Top = 84.338590000000000000
          Width = 79.370130000000000000
          Height = 26.456710000000000000
          DataField = 'JamiSumma'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."JamiSumma"]')
        end
        object frxDBDataset1Tolandi: TfrxMemoView
          Left = 151.181200000000000000
          Top = 122.133890000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = 'Tolandi'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."Tolandi"]')
        end
        object Memo11: TfrxMemoView
          Left = 105.826840000000000000
          Top = 122.133890000000000000
          Width = 45.354360000000000000
          Height = 18.897650000000000000
          Memo.UTF8W = (
            '........')
        end
        object Memo8: TfrxMemoView
          Left = -0.220470000000000000
          Top = 7.559060000000000000
          Width = 136.063080000000000000
          Height = 22.677180000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -17
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            #1059#1084#1091#1084#1080#1081' '#1057#1091#1084#1084#1072)
          ParentFont = False
        end
        object frxDBDataset1Umsumma: TfrxMemoView
          Left = 152.401670000000000000
          Top = 7.559060000000000000
          Width = 79.370130000000000000
          Height = 22.677180000000000000
          DataField = 'Umsumma'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."Umsumma"]')
        end
        object Memo12: TfrxMemoView
          Left = -0.220470000000000000
          Top = 45.913420000000000000
          Width = 139.842610000000000000
          Height = 22.677180000000000000
          Memo.UTF8W = (
            #1061#1080#1079#1084#1072#1090' '#1053#1072#1088#1093#1080)
        end
        object frxDBDataset1Q_X_Narxi: TfrxMemoView
          Left = 152.181200000000000000
          Top = 47.133890000000000000
          Width = 79.370130000000000000
          Height = 22.677180000000000000
          DataField = 'Q_X_Narxi'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."Q_X_Narxi"]')
        end
      end
      object Memo9: TfrxMemoView
        Left = 75.149660000000000000
        Top = -19.897650000000000000
        Width = 71.811070000000000000
        Height = 34.015770000000000000
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -24
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        HAlign = haCenter
        Memo.UTF8W = (
          'Kafe')
        ParentFont = False
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = DataModule2.ADOQueryVaqtinchasavdo
    BCDToCurrency = False
    Left = 304
    Top = 56
  end
end
